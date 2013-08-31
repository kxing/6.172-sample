6.172-sample
============

This is a sample implementation of the two-repository design for 6.172 in Fall 2013.

The staff-only file in the repo is staff.c and the student-modified file is student.c.
All changes to the starter code can be found as patches in the staff_patches/ directory.
In the case of changes in the staff-only code, students should be able to apply them
cleanly using:

git apply staff_patches/patch[XXX].diff

(where XXX is the patch number). In the case of changes in the student-modified code,
students can attempt to apply the patch, or view the diff online to manually patch it
themselves (https://github.com/kxing/6.172-sample/commit/e9b01cb2120f7056fb8b6a5bf2a42d68436d989c#diff-1)
Hopefully, this system will save a lot of headaches that occurred in Fall 2012.
