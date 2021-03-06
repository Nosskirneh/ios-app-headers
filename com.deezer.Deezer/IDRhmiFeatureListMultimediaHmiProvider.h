//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDHmiProvider-Protocol.h"

@class IDButton, IDMultimediaInfo, IDStatusBar, NSDictionary, NSString;

@interface IDRhmiFeatureListMultimediaHmiProvider : NSObject <IDHmiProvider>
{
    IDMultimediaInfo *_multimediaInfo;
    IDStatusBar *_hmiStatusBar;
    IDButton *_entryButtonIDRhmiFeatureListMultimedia;
    NSDictionary *_viewDict;
    NSDictionary *_modelDict;
}

@property(retain) NSDictionary *modelDict; // @synthesize modelDict=_modelDict;
@property(retain) NSDictionary *viewDict; // @synthesize viewDict=_viewDict;
@property(readonly) IDButton *entryButtonIDRhmiFeatureListMultimedia; // @synthesize entryButtonIDRhmiFeatureListMultimedia=_entryButtonIDRhmiFeatureListMultimedia;
@property(retain) IDStatusBar *hmiStatusBar; // @synthesize hmiStatusBar=_hmiStatusBar;
@property(retain) IDMultimediaInfo *multimediaInfo; // @synthesize multimediaInfo=_multimediaInfo;
- (void).cxx_destruct;
- (id)allViews;
- (id)viewForId:(long long)arg1;
- (id)allModels;
- (id)modelForId:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

