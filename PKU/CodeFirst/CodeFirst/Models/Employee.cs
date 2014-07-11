using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.ComponentModel.DataAnnotations;

namespace CodeFirst.Models
{
    public class Employee
    {
        [Key]
        public int EmployeeId   { get; set; }
        [Required]
        public string EmployeeName  { get; set; }
        [Required]
        string EmployeePassword { get; set; } // needs Verification
        [Required]
        public string EmployeeEmail { get; set; } // Regex to check if Valid
        [Required]
        public bool Admin { get; set; }
        public string Mobile { get; set; } // Regex to check if valid
        public DateTime LastLogin { get; set; }

        public virtual ICollection<Sheet> Sheet { get; set; } //
    }
}