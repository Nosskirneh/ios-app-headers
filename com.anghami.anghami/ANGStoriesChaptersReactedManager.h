//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ANGStoriesChaptersReactedManager : NSObject
{
}

+ (void)scheduleReporting;
+ (void)maybeReportReactionsWithNewReaction:(id)arg1 for:(id)arg2;
+ (void)cleanRealm;
+ (void)deleteStoryChapterReactedFromRealm:(id)arg1;
+ (id)getReactionOfStoryChapter:(id)arg1;
+ (void)cacheStoryChapterAsReacted:(id)arg1 andReactionType:(id)arg2;

@end
