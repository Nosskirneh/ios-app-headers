//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTResponderEvent.h"

@class YTCSIEvent;

@interface YTTimingPageResponderEvent : YTResponderEvent
{
    int _type;
    int _source;
    YTCSIEvent *_csiEvent;
}

+ (id)eventWithType:(int)arg1 eventSource:(int)arg2 csiEvent:(id)arg3 firstResponder:(id)arg4;
@property(retain, nonatomic) YTCSIEvent *csiEvent; // @synthesize csiEvent=_csiEvent;
@property(nonatomic) int source; // @synthesize source=_source;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithType:(int)arg1 eventSource:(int)arg2 csiEvent:(id)arg3 firstResponder:(id)arg4;

@end
