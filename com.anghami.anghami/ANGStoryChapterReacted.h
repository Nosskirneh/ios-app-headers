//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RLMObject.h"

@class NSString;

@interface ANGStoryChapterReacted : RLMObject
{
    NSString *_chapterID;
    NSString *_reactionType;
}

+ (id)primaryKey;
@property(retain, nonatomic) NSString *reactionType; // @synthesize reactionType=_reactionType;
@property(retain, nonatomic) NSString *chapterID; // @synthesize chapterID=_chapterID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithChapter:(id)arg1 andReaction:(id)arg2;

@end

