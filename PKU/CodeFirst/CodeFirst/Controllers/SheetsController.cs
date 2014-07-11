using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Mvc;
using CodeFirst.Models;

namespace CodeFirst.Controllers
{   
    public class SheetsController : Controller
    {
		private readonly IEmployeeRepository employeeRepository;
		private readonly ISheetRepository sheetRepository;

		// If you are using Dependency Injection, you can delete the following constructor
        public SheetsController() : this(new EmployeeRepository(), new SheetRepository())
        {
        }

        public SheetsController(IEmployeeRepository employeeRepository, ISheetRepository sheetRepository)
        {
			this.employeeRepository = employeeRepository;
			this.sheetRepository = sheetRepository;
        }

        //
        // GET: /Sheets/

        public ViewResult Index()
        {
            return View(sheetRepository.AllIncluding(sheet => sheet.Employee, sheet => sheet.Task));
        }

        //
        // GET: /Sheets/Details/5

        public ViewResult Details(int id)
        {
            return View(sheetRepository.Find(id));
        }

        //
        // GET: /Sheets/Create

        public ActionResult Create()
        {
			ViewBag.PossibleEmployees = employeeRepository.All;
            return View();
        } 

        //
        // POST: /Sheets/Create

        [HttpPost]
        public ActionResult Create(Sheet sheet)
        {
            if (ModelState.IsValid) {
                sheetRepository.InsertOrUpdate(sheet);
                sheetRepository.Save();
                return RedirectToAction("Index");
            } else {
				ViewBag.PossibleEmployees = employeeRepository.All;
				return View();
			}
        }
        
        //
        // GET: /Sheets/Edit/5
 
        public ActionResult Edit(int id)
        {
			ViewBag.PossibleEmployees = employeeRepository.All;
             return View(sheetRepository.Find(id));
        }

        //
        // POST: /Sheets/Edit/5

        [HttpPost]
        public ActionResult Edit(Sheet sheet)
        {
            if (ModelState.IsValid) {
                sheetRepository.InsertOrUpdate(sheet);
                sheetRepository.Save();
                return RedirectToAction("Index");
            } else {
				ViewBag.PossibleEmployees = employeeRepository.All;
				return View();
			}
        }

        //
        // GET: /Sheets/Delete/5
 
        public ActionResult Delete(int id)
        {
            return View(sheetRepository.Find(id));
        }

        //
        // POST: /Sheets/Delete/5

        [HttpPost, ActionName("Delete")]
        public ActionResult DeleteConfirmed(int id)
        {
            sheetRepository.Delete(id);
            sheetRepository.Save();

            return RedirectToAction("Index");
        }

        protected override void Dispose(bool disposing)
        {
            if (disposing) {
                employeeRepository.Dispose();
                sheetRepository.Dispose();
            }
            base.Dispose(disposing);
        }
    }
}

