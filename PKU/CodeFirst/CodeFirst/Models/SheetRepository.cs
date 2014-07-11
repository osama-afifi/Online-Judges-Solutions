using System;
using System.Collections.Generic;
using System.Data;
using System.Data.Entity;
using System.Linq;
using System.Linq.Expressions;
using System.Web;

namespace CodeFirst.Models
{ 
    public class SheetRepository : ISheetRepository
    {
        CodeFirstContext context = new CodeFirstContext();

        public IQueryable<Sheet> All
        {
            get { return context.Sheets; }
        }

        public IQueryable<Sheet> AllIncluding(params Expression<Func<Sheet, object>>[] includeProperties)
        {
            IQueryable<Sheet> query = context.Sheets;
            foreach (var includeProperty in includeProperties) {
                query = query.Include(includeProperty);
            }
            return query;
        }

        public Sheet Find(int id)
        {
            return context.Sheets.Find(id);
        }

        public void InsertOrUpdate(Sheet sheet)
        {
            if (sheet.SheetId == default(int)) {
                // New entity
                context.Sheets.Add(sheet);
            } else {
                // Existing entity
                context.Entry(sheet).State = EntityState.Modified;
            }
        }

        public void Delete(int id)
        {
            var sheet = context.Sheets.Find(id);
            context.Sheets.Remove(sheet);
        }

        public void Save()
        {
            context.SaveChanges();
        }

        public void Dispose() 
        {
            context.Dispose();
        }
    }

    public interface ISheetRepository : IDisposable
    {
        IQueryable<Sheet> All { get; }
        IQueryable<Sheet> AllIncluding(params Expression<Func<Sheet, object>>[] includeProperties);
        Sheet Find(int id);
        void InsertOrUpdate(Sheet sheet);
        void Delete(int id);
        void Save();
    }
}