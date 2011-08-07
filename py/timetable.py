#!/usr/bin/python

#############################################################################
# Imperial College Department of Computing Timetable > iCalendar Script v.2 #
# by Wilhelm Kleiminger (wk06@doc.ic.ac.uk)                                 #
# >>> http://www.kleiminger.com                                             #
#                                                                           #
# You are free to modify and redistribute this code as you wish, as long    #
# as you give me some credit ^_^                                            #
#############################################################################


import datetime
import re
import sys
import string

# Find the date, the number of the first week and the offset of
# the first day from a monday
def initTimetableInfo (line):

    mon = {'January'   : '01',
           'February'  : '02',
           'March'     : '03',
           'April'     : '04',
           'May'       : '05',
           'June'      : '06',
           'July'      : '07',
           'August'    : '08',
           'September' : '09',
           'October'   : '10',
           'November'  : '11',
           'December'  : '12'}
    
    # Create a regex pattern from the dictionary
    monKeys = mon.keys()
    pattern = string.join(map(re.escape, monKeys), "|")
    monPattern = re.compile(pattern)
    
    # Find the month and the number associated with it
    month = mon[monPattern.search(line).group()] 

    # Get all the numerical information from the string
    numPattern = re.compile('[0-9]+')
    (week, day, year) = numPattern.findall(line)

    # Find out whether the first day of the week is not
    # a monday and calculate the resulting offset, note
    # that no week starts on a saturday or sunday
    days = { 'Monday'  : 0, 'Tuesday' : 1, 'Wednesday': 2,
             'Thursday': 3, 'Friday'  : 4}

    # Create a regex pattern from the dictionary
    dayKeys = days.keys()
    pattern = string.join(map(re.escape, dayKeys), "|")
    dayPattern = re.compile(pattern)
    
    # Find the offset
    dayOffset = days[dayPattern.search(line).group()]

    # Format the information and return
    weekStart = year + month + day
    
    return (int(week), weekStart, int(dayOffset))



# Generates the event code
def printEvent (line, timeStart, week, weekStart, day, dayOffset):
	
	# Remove line breaks
	line = line.replace("\n","")
	
	# Remove the surrounding html (44 characters)
	leftHTMLPattern = re.compile ('<font( color="#000000"| face="Arial"| size="1"){3}>')
	rightHTMLPattern = re.compile ('</font>.*')
	line = leftHTMLPattern.sub('',line)
	line = rightHTMLPattern.sub('',line)
	
	# Split line into seperate events
	events=line.split('<br><br>')
	
	outputString = ""

	for event in events:
		# Get SUMMARY and DESCRIPTION values
		(summary, description) = event.split('<br>')

		# Second split
		# descList = description.split('/')
		(code, lecturers, room) = description.split('/')

		# Get the lecturers - should use regex - process only the first entry...
		lecturers = lecturers.split(',')
		firstLecturer = lecturers[0].replace(' ','')
	
		if len(firstLecturer) > 0:
			(lecturer,_) = firstLecturer.split('(');
		else:
			lecturer = "none"
	
		# datedef = LAB / wks / TUT
		# All types of events are chars long? probably safe to remove 3 characters
		eventType = code[:3]
	
		# The only two numbers are the first and the last week for this event
		p = re.compile ('[0-9]+')
		(fromWeek, toWeek) = p.findall(code)
	
		# Find the COUNT value for this event
		count = int(toWeek) - int(fromWeek)
	
		weekStartDate = datetime.datetime(int(weekStart[:4]), int(weekStart[4:6]), int(weekStart[6:]), # date
						int(timeStart[:2]), int(timeStart[2:]))                      # time
		
		# Compute the first date for this event (taking the no of the first week of this calendar into account)
		weekOffset = int(fromWeek) - week
		weekStartDate = weekStartDate + datetime.timedelta(weeks=weekOffset)
		weekStartDate = weekStartDate + datetime.timedelta(days=day) - datetime.timedelta(days=dayOffset)
		weekEndDate = weekStartDate + datetime.timedelta(hours=1)
		dtstart = weekStartDate.strftime('%Y%m%dT%H%M%S') # DTSTART value (20071008T120000Z)
		dtend = weekEndDate.strftime('%Y%m%dT%H%M%S') # DTSTART value (20071008T120000Z)
	
		# Generate the output
	
		outputString += "\nBEGIN:VEVENT\n"
		if lecturer != "None":
			outputString += 'ORGANIZER;CN='+lecturer+':MAILTO:'+lecturer+'@doc.ic.ac.uk\n'
		outputString += "SUMMARY:"+summary+"\n"
		outputString += "DESCRIPTION:"+description+"\n"
		outputString += "DTSTART;TZID=Europe/London:"+dtstart+"\n"
		outputString += "DTEND;TZID=Europe/London:"+dtend+"\n"
		if count > 0: outputString += "RRULE:FREQ=WEEKLY;COUNT="+str(count+1)+"\n" #plus 1 to include last week
		outputString += "CATEGORIES:EDUCATION\n"
		outputString += "LOCATION:"+room[1:]+"\n"
		outputString += "END:VEVENT\n"
        
        return outputString





def main():

	# Get the files from argv
	files = sys.argv[1:]
	
	# Generate patterns used to split the html
	# Some optimisation might be done here
	timeColumn  = re.compile ('<font( color="#000000"| face="Arial"| size="2"){3}>[0-9]{4}.*')
	newLine     = re.compile ('(<tr).*')
	eventColumn = re.compile ('<font( color="#000000"| face="Arial"| size="1"){3}>.*')
	emptyEvent  = re.compile ('<font( color="#000000"| face="Arial"| size="1"){3}>(Out of Term.*|<br></font>)');
	dateRow     = re.compile('Week [0-9] start date: .*? [0-9]{4}'); 

	# Creates one output file for every single input file (could be changed to a single output file)
	for INPUTFILE in files:

		# Generate the name for the outputfile and open it
		OUTPUTFILE = INPUTFILE.replace("htm","ics");
		outputFile = open(OUTPUTFILE,"w")

		# Write Google Calendar compliant iCalendar header to output file
		output = "BEGIN:VCALENDAR\nPRODID:-//Google Inc//Google Calendar 70.9054//EN\nVERSION:2.0\nCALSCALE:GREGORIAN\nMETHOD:PUBLISH\nX-WR-TIMEZONE:Europe/London\nBEGIN:VTIMEZONE\nTZID:Europe/London\nX-LIC-LOCATION:Europe/London\nBEGIN:DAYLIGHT\nTZOFFSETFROM:+0000\nTZOFFSETTO:+0100\nTZNAME:BST\nDTSTART:19700329T010000\nRRULE:FREQ=YEARLY;BYMONTH=3;BYDAY=-1SU\nEND:DAYLIGHT\nBEGIN:STANDARD\nTZOFFSETFROM:+0100\nTZOFFSETTO:+0000\nTZNAME:GMT\nDTSTART:19701025T020000\nRRULE:FREQ=YEARLY;BYMONTH=10;BYDAY=-1SU\nEND:STANDARD\nEND:VTIMEZONE\n"
		outputFile.write(output)

		# Open the input file (could possibly be changed into an url in the future)
		inputFile = open(INPUTFILE, "r")

		# Walk through the lines in the input file
		for l in inputFile:
			result = dateRow.search(l)
			if result:
				# Find the DSTART value for this event
				# week is the number of the first week in this calendar (ie 1 or 2)
				# weekStart is the date of the first day of this week (does not have to be a monday)
				# If weekStart is not a monday, the dayOffset assures that the correct date is computed
				(week, weekStart, dayOffset) = initTimetableInfo(result.group())
			
			if timeColumn.match(l):
				# We are in the time column so find the current time
				timePattern = re.compile('[0-9]{4}')
				# Find all possible values for the time
				possibleTimes = timePattern.findall(l)
				# Take only the last one (the first is the hex value for the colour black)
				time = possibleTimes[len(possibleTimes)-1]
			
			if newLine.match(l):
				day = 0 # reset day to 0
			
			if eventColumn.match(l):
				if not emptyEvent.match(l):
					# Call the function to print the event
					outputFile.write(printEvent(l,time,week,weekStart,day,dayOffset))
				day += 1

		print "File \""+OUTPUTFILE+"\" successfully written\n"

		# Close input file
		inputFile.close()
		outputFile.write( "END:VCALENDAR" )

		# Close output file
		outputFile.close()
	
	
	

if __name__ == "__main__":
    main()
    
    
