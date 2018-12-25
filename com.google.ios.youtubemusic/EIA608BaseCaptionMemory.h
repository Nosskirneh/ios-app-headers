//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "EIA608Processor-Protocol.h"

@class NSMutableArray, NSString, YTEIA608Cursor;

@interface EIA608BaseCaptionMemory : NSObject <EIA608Processor>
{
    NSMutableArray *_rows;
    YTEIA608Cursor *_cursor;
}

@property(retain, nonatomic) YTEIA608Cursor *cursor; // @synthesize cursor=_cursor;
@property(readonly, nonatomic) NSMutableArray *rows; // @synthesize rows=_rows;
- (void).cxx_destruct;
- (id)getCurrentRow;
- (int)extractRowFromCommand:(CDStruct_7d92f6c3)arg1;
- (id)attributedString;
- (void)erase;
- (int)processCommand:(CDStruct_7d92f6c3)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

