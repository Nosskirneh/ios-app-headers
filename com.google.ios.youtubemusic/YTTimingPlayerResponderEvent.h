//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTResponderEvent.h"

@class YTTimingPlayerResponderEventData;

@interface YTTimingPlayerResponderEvent : YTResponderEvent
{
    int _type;
    YTTimingPlayerResponderEventData *_data;
}

+ (id)eventWithType:(int)arg1 data:(id)arg2 firstResponder:(id)arg3;
@property(readonly, nonatomic) YTTimingPlayerResponderEventData *data; // @synthesize data=_data;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithType:(int)arg1 data:(id)arg2 firstResponder:(id)arg3;

@end

