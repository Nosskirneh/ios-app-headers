//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPlaylistHeaderProvider-Protocol.h"

@class NSString, SPTFreeTierPlaylistVISREFFullBleedHeaderControllerImplementation;
@protocol GLUETheme, SPTImageLoader, VISREFIntegrationManager;

@interface SPTFreeTierPlaylistVISREFFullBleedHeaderProviderImplementation : NSObject <SPTFreeTierPlaylistHeaderProvider>
{
    id <GLUETheme> _theme;
    id <SPTImageLoader> _imageLoader;
    id <VISREFIntegrationManager> _visrefIntegrationManager;
    SPTFreeTierPlaylistVISREFFullBleedHeaderControllerImplementation *_visrefHeaderController;
}

@property(retain, nonatomic) SPTFreeTierPlaylistVISREFFullBleedHeaderControllerImplementation *visrefHeaderController; // @synthesize visrefHeaderController=_visrefHeaderController;
@property(retain, nonatomic) id <VISREFIntegrationManager> visrefIntegrationManager; // @synthesize visrefIntegrationManager=_visrefIntegrationManager;
@property(readonly, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool drawDropShadow;
@property(readonly, nonatomic) _Bool drawBottomLineLayer;
- (id)provideHeader;
- (void)configureBarButtonManagerDelegate:(id)arg1;
- (void)configureWithPlayViewModel:(id)arg1 followViewModel:(id)arg2 defaultHeaderViewModel:(id)arg3 fullbleedHeaderViewModel:(id)arg4 playlistOfflineViewModel:(id)arg5 filterSortBarView:(id)arg6;
- (void)setupVISREFHeaderController;
- (id)initWithTheme:(id)arg1 imageLoader:(id)arg2 visrefIntegrationManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

