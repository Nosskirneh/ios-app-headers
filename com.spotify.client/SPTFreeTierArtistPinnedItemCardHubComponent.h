//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBComponent-Protocol.h"

@class NSSet, SPTFreeTierArtistGLUETheme;

@interface SPTFreeTierArtistPinnedItemCardHubComponent : NSObject <HUBComponent>
{
    SPTFreeTierArtistGLUETheme *_theme;
}

@property(retain, nonatomic) SPTFreeTierArtistGLUETheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (id)createViewWithFrame:(struct CGRect)arg1;
@property(readonly, copy, nonatomic) NSSet *layoutTraits;
- (id)initWithTheme:(id)arg1;

@end
