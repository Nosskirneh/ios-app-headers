//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RLMObject.h"

@class NSString;

@interface ANGStoryViewed : RLMObject
{
    NSString *_storyID;
    double _newestViewedChapter;
    double _mostRecentlyViewedChapter;
}

+ (void)cleanRealm;
+ (void)deleteStoryViewedFromRealm:(id)arg1;
+ (id)getMostRecentlyViewedChapterFromStory:(id)arg1;
+ (_Bool)hasStoryBeenViewed:(id)arg1;
+ (void)cacheStoryAsViewed:(id)arg1 andChapter:(id)arg2;
+ (id)primaryKey;
@property double mostRecentlyViewedChapter; // @synthesize mostRecentlyViewedChapter=_mostRecentlyViewedChapter;
@property double newestViewedChapter; // @synthesize newestViewedChapter=_newestViewedChapter;
@property(retain, nonatomic) NSString *storyID; // @synthesize storyID=_storyID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setStoryChapterAsViewed:(id)arg1;
- (id)initWithStory:(id)arg1 andChapter:(id)arg2;

@end
