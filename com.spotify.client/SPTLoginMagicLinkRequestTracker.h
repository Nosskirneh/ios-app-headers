//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SPTLoginMagicLinkRequestTracker : NSObject
{
    NSMutableDictionary *_requestHistory;
}

@property(retain, nonatomic) NSMutableDictionary *requestHistory; // @synthesize requestHistory=_requestHistory;
- (void).cxx_destruct;
- (_Bool)hasMadeRequestForEmail:(id)arg1 withinTheLastSeconds:(double)arg2 currentTime:(id)arg3;
- (void)trackRequestForEmail:(id)arg1 withCurrentTime:(id)arg2;
- (id)init;

@end

