//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTArtistAboutHubComponentFactory-Protocol.h"

@class NSString, SPTArtistAboutGLUETheme;

@interface SPTArtistAboutHubComponentFactoryImplementation : NSObject <SPTArtistAboutHubComponentFactory>
{
    SPTArtistAboutGLUETheme *_theme;
}

@property(retain, nonatomic) SPTArtistAboutGLUETheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (id)createBiographyComponent;
- (id)initWithTheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

