//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPSession;
@protocol SPTLogCenter;

@interface SPTFreeTierHomeLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
    SPSession *_currentSession;
}

@property(nonatomic) __weak SPSession *currentSession; // @synthesize currentSession=_currentSession;
@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (double)getTimestamp;
- (void)logDidTapOnProfileButton;
- (id)initWithLogCenter:(id)arg1 currentSession:(id)arg2;

@end

