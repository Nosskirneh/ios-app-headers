//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMVastNodeBaseParser.h"

@class IMCompanionTracker;

@interface IMCompanionTrackingParser : IMVastNodeBaseParser
{
    IMCompanionTracker *_tracker;
}

+ (id)parserElementName;
@property(retain, nonatomic) IMCompanionTracker *tracker; // @synthesize tracker=_tracker;
- (void).cxx_destruct;
- (void)foundCDATA:(id)arg1;

@end

