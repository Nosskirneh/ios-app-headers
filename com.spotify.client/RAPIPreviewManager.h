//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSTimer, RAPIScreen;

@interface RAPIPreviewManager : NSObject
{
    RAPIScreen *_currentPreviewScreen;
    NSTimer *_previewDelayTimer;
}

@property(retain) NSTimer *previewDelayTimer; // @synthesize previewDelayTimer=_previewDelayTimer;
@property(retain) RAPIScreen *currentPreviewScreen; // @synthesize currentPreviewScreen=_currentPreviewScreen;
- (void).cxx_destruct;
- (void)setExtendedEntertainmentPreview:(id)arg1 imageData:(id)arg2 text1:(id)arg3 text2:(id)arg4 forWidget:(id)arg5;
- (void)setEntertainmentPreview:(id)arg1 imageData:(id)arg2 text:(id)arg3 forWidget:(id)arg4;
- (void)setStatePreview:(id)arg1 previewView:(id)arg2 forWidget:(id)arg3;
- (void)setStatePreview:(id)arg1 previewScreenIndex:(long long)arg2 forWidget:(id)arg3;
- (void)onPreviewDelayTimer:(id)arg1;
- (void)screenChanged;
- (void)setPreview:(id)arg1 previewScreenIndex:(long long)arg2 forWidget:(id)arg3;

@end

