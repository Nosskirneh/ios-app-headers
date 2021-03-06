//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GLUEThemeBase.h"

@class GLUEEntityRowStyle, SPTFreeTierPreCurationChunkyRowStyle;
@protocol SPTCollectionPlatformConfiguration;

@interface SPTFreeTierPreCurationTheme : GLUEThemeBase
{
    id <SPTCollectionPlatformConfiguration> _collectionConfiguration;
}

@property(retain, nonatomic) id <SPTCollectionPlatformConfiguration> collectionConfiguration; // @synthesize collectionConfiguration=_collectionConfiguration;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) GLUEEntityRowStyle *trackRowPreCurationStyle;
@property(readonly, copy, nonatomic) SPTFreeTierPreCurationChunkyRowStyle *bannedChunkyTrackRowStyle;
@property(readonly, copy, nonatomic) SPTFreeTierPreCurationChunkyRowStyle *defaultChunkyTrackRowStyle;
- (id)initWithParentTheme:(id)arg1 collectionConfiguration:(id)arg2;

@end

