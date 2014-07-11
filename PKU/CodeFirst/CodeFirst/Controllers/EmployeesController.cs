using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Mvc;
using CodeFirst.Models;

namespace CodeFirst.Controllers
{   
    public class EmployeesController : Controller
    {
		private readonly IEmployeeRepository employeeRepository;

		// If you are using Dependency Injection, you can delete the following constructor
        public EmployeesController() : this(new EmployeeRepository())
        {
        }

        public EmployeesController(IEmployeeRepository employeeRepository)
        {
			this.employeeRepository = employeeRepository;
        }

        //
        // GET: /Employees/

        public ViewResult Index()
        {
            return View(employeeRepository.AllIncluding(employee => employee.Sheet));
        }

        //
        // GET: /Employees/Details/5

        public ViewResult Details(int id)
        {
            return View(employeeRepository.Find(id));
        }

        //
        // GET: /Employees/Create

        public ActionResult Create()
        {
            return View();
        } 

        //
        // POST: /Employees/Create

        [HttpPost]
        public ActionResult Create(Employee employee)
        {
            if (ModelState.IsValid) {
                employeeRepository.InsertOrUpdate(employee);
                employeeRepository.Save();
                return RedirectToAction("Index");
            } else {
				return View();
			}
        }
        
        //
        // GET: /Employees/Edit/5
 
        public ActionResult Edit(int id)
        {
             return View(employeeRepository.Find(id));
        }

        //
        // POST: /Employees/Edit/5

        [HttpPost]
        public ActionResult Edit(Employee employee)
        {
            if (ModelState.IsValid) {
                employeeRepository.InsertOrUpdate(employee);
                employeeRepository.Save();
                return RedirectToAction("Index");
            } else {
				return View();
			}
        }

        //
        // GET: /Employees/Delete/5
 
        public ActionResult Delete(int id)
        {
            return View(employeeRepository.Find(id));
        }

        //
        // POST: /Employees/Delete/5

        [HttpPost, ActionName("Delete")]
        public ActionResult DeleteConfirmed(int id)
        {
            employeeRepository.Delete(id);
            employeeRepository.Save();

            return RedirectToAction("Index");
        }

        protected override void Dispose(bool disposing)
        {
            if (disposing) {
                employeeRepository.Dispose();
            }
            base.Dispose(disposing);
        }
    }
}

