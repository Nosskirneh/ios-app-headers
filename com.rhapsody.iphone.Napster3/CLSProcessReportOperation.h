//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class CLSInternalReport, CLSSymbolResolver;

@interface CLSProcessReportOperation : NSOperation
{
    CLSSymbolResolver *_symbolResolver;
    CLSInternalReport *_report;
}

@property(readonly, nonatomic) CLSInternalReport *report; // @synthesize report=_report;
@property(readonly, nonatomic) CLSSymbolResolver *symbolResolver; // @synthesize symbolResolver=_symbolResolver;
- (void).cxx_destruct;
- (void)main;
- (_Bool)symbolicateFile:(id)arg1 withResolver:(id)arg2;
- (id)threadArrayFromFile:(id)arg1;
- (id)binaryImagePath;
- (id)initWithReport:(id)arg1 resolver:(id)arg2;

@end

