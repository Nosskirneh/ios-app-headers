//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTResponderEvent.h"

@interface YTMLikeStatusDidChangeResponderEvent : YTResponderEvent
{
    int _likeStatus;
}

+ (id)eventWithLikeStatus:(int)arg1 firstResponder:(id)arg2;
@property(nonatomic) int likeStatus; // @synthesize likeStatus=_likeStatus;
- (id)initWithLikeStatus:(int)arg1 firstResponder:(id)arg2;

@end

