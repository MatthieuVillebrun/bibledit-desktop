/*
** Copyright (©) 2003-2013 Teus Benschop.
**  
** This program is free software; you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation; either version 3 of the License, or
** (at your option) any later version.
**  
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**  
** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the Free Software
** Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
**  
*/


#ifndef INCLUDED_TYPES_H
#define INCLUDED_TYPES_H


typedef vector <ustring> VectorUstring;

enum NoteType {indtFootnote, indtEndnote, indtCrossreference};
enum NumberingType {ntAutomatic, ntNone, ntCharacter};

enum SearchResultsType {sstLoad, sstAdd, sstSubtract, sstShare};

enum CheckSortType {cstSort0, cstSort1, cstSort2, cstSort3};

enum AreaType {atRaw, atAll, atSelection};

enum OriginReferencesActionType {oratNothing, oratRemoveReferences, oratAddReference, oratTextLabels };

enum StylesheetType {stBasic, stBasicParagraph, stBasicParagraphWordNote, 
                     stSilBestPractice, stFull};

enum NotesSelectionReferenceType {nsrtCurrentVerse, nsrtCurrentChapter, nsrtCurrentBook, nsrtAny};
enum NotesSelectionEditedType {nsetToday, nsetDateRange, nsetAny};
                              
enum ResourceConversionType {
  rctChapterStartsAtPatternVerseOneStartsAtChapterVerseStartsAtPattern,
  rctEnd
};



#endif
