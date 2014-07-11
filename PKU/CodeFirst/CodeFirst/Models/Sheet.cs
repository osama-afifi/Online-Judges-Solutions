using System;
using System.Collections.Generic;
using System.Linq;
using System.ComponentModel.DataAnnotations;

namespace CodeFirst.Models
{
    public class Sheet
    {
        [Key]
        public int SheetId { get; set; }
        public DateTime StartDate { get; set; }
        public int EmployeeId { get; set; }

        public virtual Employee Employee { get; set; } // This is new
        public virtual ICollection<Task> Task { get; set; } // This is new
    }
}