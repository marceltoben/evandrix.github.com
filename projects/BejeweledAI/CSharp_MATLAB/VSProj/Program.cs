using System;
using System.Collections.Generic;
using System.Text;

// MathWorks assemblies that ship with Builder for .NET
// and should be registered in Global Assembly Cache
using MathWorks.MATLAB.NET.Utility;
using MathWorks.MATLAB.NET.Arrays;

// Assembly built by Builder for .NET containing 
// math_on_numbers.m
using dotnet;

// To include the C Shared Library created with
// MATLAB Compiler we need to include InteropServices
// to integrate the unmanaged code
using System.Runtime.InteropServices;


// Copyright 2006, 2007, 2010 The MathWorks, Inc.

namespace example_ML_integration
{
    class Program
    {
        static void Main(string[] args)
        {
            //////////////////////
            // Runtime Parameters
            //////////////////////

            // Create a mode variable to determine which
            // method is used.
            // 1 = MATLAB Com engine interface
            // 2 = .NET Assembly
            // 3 = C shared library
            System.Int16 Mode = 2;

            ////////////////////
            // Input Parameters
            ////////////////////

            // create an array ar for the real part of "a"
            System.Array ar = new double[2];
            ar.SetValue(11, 0);
            ar.SetValue(12, 1);

            // create an array ai for the imaginary part of "a"
            System.Array ai = new double[2];
            ai.SetValue(1, 0);
            ai.SetValue(2, 1);

            // create an array br for the real part of "b"
            System.Array br = new double[2];
            br.SetValue(21, 0);
            br.SetValue(22, 1);

            // create an array bi for the imaginary part of "b"
            System.Array bi = new double[2];
            bi.SetValue(3, 0);
            bi.SetValue(4, 1);

            /////////////////////
            // Output Parameters
            /////////////////////

            // initialize variables for return value from ML
            System.Array cr = new double[2];
            System.Array ci = new double[2];
            System.Array dr = new double[2];
            System.Array di = new double[2];


            ////////////////////////
            // Call MATLAB function
            ////////////////////////
            // call appropriate function/method based on Mode
            if (Mode == 1)
            {
                // use MATLAB engine
                UseEngine(ar, ai, br, bi, ref cr, ref ci, ref dr, ref di);
            }
            else if (Mode == 2)
            {
                // use .NET assembly created with Builder for .NET
                UseDotNET(ar, ai, br, bi, ref cr, ref ci, ref dr, ref di);
            }
            else if (Mode == 3)
            {
                // use C Shared Library created with MATLAB Compiler
                UseClib(ar, ai, br, bi, ref cr, ref ci, ref dr, ref di);
            }
            // any other value of Mode is invalid and we can do nothing


            /////////////////////
            // Output to console
            /////////////////////
            DisplayMethod(Mode);
            DisplayArgs( true, ar, ai, br, bi); // true = input
            DisplayArgs(false, cr, ci, dr, di); // false = not-input or output
            DisplayEnd();


        }

        /*
         * All input and output arguments must have been allocated
         * prior to calling these functions
         * 
         *  Input: 
         *      ar  real      part of a
         *      ai  imaginary part of a
         *      br  real      part of b
         *      bi  imaginary part of b
         * 
         *  Output: 
         *      cr  real      part of c
         *      ci  imaginary part of c
         *      dr  real      part of d
         *      di  imaginary part of d
        */
        static private void UseEngine(Array ar, Array ai, Array br,
            Array bi, ref Array cr, ref Array ci, ref Array dr, ref Array di)
        {
           /*
            * This function calls the math_by_numbers routine inside
            * MATLAB using the MATLAB Engine's com interface
            */
        
            // Instantiate MATLAB Engine Interface through com
            MLApp.MLAppClass matlab = new MLApp.MLAppClass();

            // Using Engine Interface, put the matrix "a" into 
            // the base workspace.
            // "a" is a complex variable with a real part of ar,
            // and an imaginary part of ai
            matlab.PutFullMatrix("a", "base", ar, ai);

            // Using Engine Interface, put the matrix "b" into 
            // the base workspace.
            // "b" is a complex variable with a real part of br,
            // and an imaginary part of bi
            matlab.PutFullMatrix("b", "base", br, bi);

            // Using Engine Interface, execute the ML command
            // contained in quotes.
            matlab.Execute("cd c:\\demos\\CSharp_MATLAB\\mcode;");
            matlab.Execute("open math_on_numbers.m");
            matlab.Execute("dbstop in math_on_numbers.m");
            matlab.Execute("[c, d] = math_on_numbers(a,b);");
            matlab.Execute("com.mathworks.mlservices.MLEditorServices.closeAll");
            //matlab.Execute("dbquit all");

            // Using Engine Interface, get the matrix "c" from
            // the base workspace.
            // "c" is a complex variable with a real part of cr,
            // and an imaginary part of ci
            matlab.GetFullMatrix("c", "base", ref cr, ref ci);

            // using engine interface, get the matrix "c" from
            // the base workspace.
            // "d" is a complex variable with a real part of dr,
            // and an imaginary part of di
            matlab.GetFullMatrix("d", "base", ref dr, ref di);

        }

        static private void UseDotNET(Array ar, Array ai, Array br,
            Array bi, ref Array cr, ref Array ci, ref Array dr, ref Array di)
        {
            /*
             * This function calls the math_by_numbers method from
             * inside a .NET assembly created with MATLAB using Builder
             * for .NET.
             */

            // Instantiate our .NET class from the MATLAB created component
            dotnetclass AClass = new dotnetclass();

            // explicity convert our input arguments into MWArrays
            // this can be done with implicit conversion
            MWNumericArray a = new MWNumericArray(1, 2, (double[])ar, (double[])ai);
            MWNumericArray b = new MWNumericArray(1, 2, (double[])br, (double[])bi);

            // call math_on_method from Assembly specifying the number
            // of return arguments expected and passing in a and b
            MWArray[] RetVal = AClass.math_on_numbers(2, a, b);

            // Unpack return values seperating the real and imaginary parts
            // using the ToArray method of MWNummericArray.  Since RetVal was
            // declared as a MWArray above, it must be explicity typecast here.  
            cr = ((MWNumericArray) RetVal[0]).ToVector(MWArrayComponent.Real);
            ci = ((MWNumericArray) RetVal[0]).ToVector(MWArrayComponent.Imaginary);
        
            dr = ((MWNumericArray) RetVal[1]).ToVector(MWArrayComponent.Real);
            di = ((MWNumericArray) RetVal[1]).ToVector(MWArrayComponent.Imaginary);

        }

        static private void UseClib(Array ar, Array ai, Array br,
            Array bi, ref Array cr, ref Array ci, ref Array dr, ref Array di)
        {
            /*
             * This function calls the math_by_numbers method from
             * inside a C Shared Library created with MATLAB Compiler.
             */

            // A new class Clib is used to wrap the unmanaged library.
            // http://msdn.microsoft.com/library/default.asp?url=/library/en-us/cpguide/html/cpconcreatingprototypesinmanagedcode.asp
            
            // The new class is instantiated here.
            Clib AClass = new Clib();

            AClass.DoTheWork(ar, ai, br, bi, ref cr, ref ci, ref dr, ref di);

        }

        class Clib
        {
            // Wrap all of the unmanaged functions that need to
            // be called directly using DLLImport
            // http://msdn.microsoft.com/library/default.asp?url=/library/en-us/cpguide/html/cpconconsumingunmanageddllfunctions.asp
            [DllImport("cshared.dll")]
            private static extern void mlfMath_on_numbers([In]Int32 nargout, ref IntPtr c, ref IntPtr d, [In]IntPtr a, [In]IntPtr b);

            [DllImport("cshared.dll")]
            private static extern void csharedInitialize();

            [DllImport("cshared.dll")]
            private static extern void csharedTerminate();

            [DllImport("mclmcrrt711.dll")]
            private static extern IntPtr mxCreateDoubleMatrix_730_proxy([In]Int32 numRows, [In]Int32 numCols, [In]Int32 mxComplexity);
            /*
             * typedef enum {
             *     mxREAL,
             *     mxCOMPLEX
             * } mxComplexity;
             */

            [DllImport("mclmcrrt711.dll")]
            private static extern IntPtr mxGetPr_proxy([In] IntPtr mxArray);

            [DllImport("mclmcrrt711.dll")]
            private static extern IntPtr mxGetPi_proxy([In] IntPtr mxArray);

            [DllImport("mclmcrrt711.dll")]
            private static extern void mxDestroyArray_proxy([In] IntPtr mxArray);

            [DllImport("mclmcrrt711.dll")]
            private static extern bool mclInitializeApplication_proxy(string options, Int32 count);

            [DllImport("mclmcrrt711.dll")]
            private static extern void mclTerminateApplication_proxy();

            public void DoTheWork(Array ar, Array ai, Array br, Array bi,
                ref Array cr, ref Array ci, ref Array dr, ref Array di)
            {
                //////////////////
                // Initialization
                //////////////////
                
                // Initialize MCR
                bool RetVal;
                RetVal = mclInitializeApplication_proxy("NULL",0);

                // Initalize our csharedlib
                csharedInitialize();

                //////////////////////////
                // Create Input Arguments
                //////////////////////////
                // create an mxarray to contain a and b
                IntPtr a_ptr = mxCreateDoubleMatrix_730_proxy(1, 2, 1);  /* 1 row, 2 cols, IsComplex */
                IntPtr b_ptr = mxCreateDoubleMatrix_730_proxy(1, 2, 1);  /* 1 row, 2 cols, IsComplex */
                
                // get pointer to real and imaginary parts of a
                IntPtr ar_ptr = mxGetPr_proxy(a_ptr);
                IntPtr ai_ptr = mxGetPi_proxy(a_ptr);
                
                // get pointer to real and imaginary parts of b
                IntPtr br_ptr = mxGetPr_proxy(b_ptr);
                IntPtr bi_ptr = mxGetPi_proxy(b_ptr);
                
                
                ////////////////
                // Copy In Data
                ////////////////
                
                // copy values to unmanaged array (mwArray)
                // http://msdn.microsoft.com/library/default.asp?url=/library/en-us/cpref/html/frlrfsystemruntimeinteropservicesmarshalclasswritebytetopic2.asp
                Marshal.Copy((double[])ar, 0, ar_ptr, 2);
                Marshal.Copy((double[])ai, 0, ai_ptr, 2);
                Marshal.Copy((double[])br, 0, br_ptr, 2);
                Marshal.Copy((double[])bi, 0, bi_ptr, 2);
                

                ///////////////////////////
                // Create Output Arguments
                ///////////////////////////
                
                // create pointers for return values c and d
                IntPtr c_ptr = IntPtr.Zero;
                IntPtr d_ptr = IntPtr.Zero;


                ////////////////////////////////
                // Call function from C library
                ////////////////////////////////
                
                // call math on numbers
                try
                {
                    mlfMath_on_numbers(2, ref c_ptr, ref d_ptr, a_ptr, b_ptr);
                }
                catch (Exception e)
                {
                    Console.WriteLine(e.Message);
                }

                /////////////////
                // Copy Out Data
                /////////////////
                
                // get pointer to real and imaginary parts of a
                IntPtr cr_ptr = mxGetPr_proxy(c_ptr);
                IntPtr ci_ptr = mxGetPi_proxy(c_ptr);

                // get pointer to real and imaginary parts of b
                IntPtr dr_ptr = mxGetPr_proxy(d_ptr);
                IntPtr di_ptr = mxGetPi_proxy(d_ptr);

                // copy values from unmanaged array (mwArray)
                Marshal.Copy(cr_ptr, (double[])cr, 0, 2);
                Marshal.Copy(ci_ptr, (double[])ci, 0, 2);
                Marshal.Copy(dr_ptr, (double[])dr, 0, 2);
                Marshal.Copy(di_ptr, (double[])di, 0, 2);

                
                ///////////
                // CleanUp
                ///////////
                
                // destroy mxarrays
                mxDestroyArray_proxy(a_ptr);
                mxDestroyArray_proxy(b_ptr);

                // Terminate libraries
                Clib.csharedTerminate();
                Clib.mclTerminateApplication_proxy();
            
            } // end function DoTheWork()

        } // end class Clib

        static private void DisplayMethod([In]Int16 Mode)
        {
            String Part1 = "Calling MATLAB code via ";
            String Part2 = String.Empty;
            String Empty = "";

            switch (Mode)
            {
                case 1: Part2 = Part2 + "Engine Interface."; break;
                case 2: Part2 = Part2 + ".NET Assembly."   ; break;
                case 3: Part2 = Part2 + "C Shared Library."; break;
            }

            Console.WriteLine(Empty);

            Console.WriteLine(String.Concat(Part1, Part2));

        } // end function DisplayMethod

        static private void DisplayArgs(Boolean In, [In]Array OneReal, [In]Array OneImag,
            [In]Array TwoReal, [In]Array TwoImag)
        {
            // declare variables to hold output
            String [] Labels = new String[2];
            String []   Line = new String[6];
            
            // allow for a space between each set of variables
            Line[3] = "";
            
            // setup first output line and labels
            // based on whether this is an input
            // or an output
            if (In)
            {
                // this is the first output, so
                // prepare the console
                Console.Clear();

                Line[0] = "Using input args:";
                Labels[0] = "a";
                Labels[1] = "b";
            }
            else
            {
                Line[0] = "Return Values are:";
                Labels[0] = "c";
                Labels[1] = "d";
            }
            
            // format the variable output lines
            for (int element = 0; element < 2; element++)
            {
                Line[1 + element] = String.Format("{0}({1}) = {2,5:.####} + {3,5:.####}*i", Labels[0], (element + 1), OneReal.GetValue(element), OneImag.GetValue(element));
                Line[4 + element] = String.Format("{0}({1}) = {2,5:.####} + {3,5:.####}*i", Labels[1], (element + 1), TwoReal.GetValue(element), TwoImag.GetValue(element));

            }

            // write output to screen
            Console.WriteLine("");

            for (int i = 0; i < 6; i++)
            {
                Console.WriteLine(Line[i]);
            }
            
        } // end function DisplayArgs

        static private void DisplayEnd()
        {
            ConsoleKeyInfo keypressed;

            Console.WriteLine();
            Console.WriteLine("Press any key to exit.");

            keypressed = Console.ReadKey(true);

        } // end function DisplayEnd

    } // end class Program

} // end namespace example_ML_integration
