//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EXP_HUBComponent.h"

@class NSSet, SPTArtistAboutGLUETheme;

@interface SPTArtistAboutPreviewHubComponent : NSObject <EXP_HUBComponent>
{
    SPTArtistAboutGLUETheme *_theme;
}

@property(retain, nonatomic) SPTArtistAboutGLUETheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (id)createViewWithFrame:(struct CGRect)arg1;
@property(readonly, copy, nonatomic) NSSet *layoutTraits;
- (id)initWithTheme:(id)arg1;

@end

