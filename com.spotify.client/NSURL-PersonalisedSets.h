//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (PersonalisedSets)
+ (id)spt_artistDismissRecommendationURLForDimissUri:(id)arg1;
+ (id)spt_artistFollowRecommendationsURL;
+ (id)spt_personalisedSetsPrefixComponents;
+ (id)spt_personalisedSetURLWithPlaylistURL:(id)arg1;
@property(readonly, nonatomic, getter=spt_personalisedSetEmbeddedPlaylistURL) NSURL *personalisedSetEmbeddedPlaylistURL;
@property(readonly, nonatomic, getter=spt_isPersonalisedSetURL) _Bool personalisedSetURL;
@end

