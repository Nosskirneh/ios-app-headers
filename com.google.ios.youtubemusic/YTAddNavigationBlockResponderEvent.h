//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTResponderEvent.h"

@interface YTAddNavigationBlockResponderEvent : YTResponderEvent
{
    CDUnknownBlockType _navigationBlock;
}

+ (id)eventWithNavigationBlock:(CDUnknownBlockType)arg1 firstResponder:(id)arg2;
@property(readonly, nonatomic) CDUnknownBlockType navigationBlock; // @synthesize navigationBlock=_navigationBlock;
- (void).cxx_destruct;
- (id)initWithNavigationBlock:(CDUnknownBlockType)arg1 firstResponder:(id)arg2;

@end

