//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTResponderEvent.h"

@class YTICommand;

@interface YTVideoCellTappedActionResponderEvent : YTResponderEvent
{
    YTICommand *_command;
}

+ (id)eventWithCommand:(id)arg1 firstResponder:(id)arg2;
@property(readonly, nonatomic) YTICommand *command; // @synthesize command=_command;
- (void).cxx_destruct;
- (id)initWithCommand:(id)arg1 firstResponder:(id)arg2;

@end

