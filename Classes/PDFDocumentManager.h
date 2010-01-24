//
//  PDFDocumentProcessor.h
//  PDFKitTool
//
//  Created by Joachim Fornallaz on 23.01.10.
//  Copyright 2010 Joachim Fornallaz. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Quartz/Quartz.h>


@interface PDFDocumentManager : NSObject {
	NSMutableArray *inputDocuments;
}

+ (PDFDocumentManager *)processor;

- (void)addDocument:(PDFDocument *)aDocument;
- (NSUInteger)documentCount;
- (BOOL)catDocuments;
- (BOOL)burstDocuments;
- (BOOL)writeDocumentsToFile:(NSString *)path;

@end