//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "YTMMusicDataBoundApplyContainerEntityProtocol-Protocol.h"

@class NSMutableArray, NSString, YTIMusicEntityRef, YTIMusicEntityReference, YTIRenderer;

@interface YTIMusicListItemRenderer : GPBMessage <YTMMusicDataBoundApplyContainerEntityProtocol>
{
}

+ (id)descriptor;
- (id)ytm_playlistIDFromEntity:(id)arg1;
- (id)ytm_videoIDFromEntity:(id)arg1;
- (void)ytm_fillPlayButtonRenderer:(id)arg1 withEntity:(id)arg2 cache:(id)arg3;
- (void)ytm_applyContainerEntityReference:(id)arg1 index:(unsigned long long)arg2 cache:(id)arg3;

// Remaining properties
@property(retain, nonatomic) YTIMusicEntityRef *containerEntityRef; // @dynamic containerEntityRef;
@property(retain, nonatomic) YTIMusicEntityReference *containerEntityReference; // @dynamic containerEntityReference;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) YTIMusicEntityRef *entityRef; // @dynamic entityRef;
@property(retain, nonatomic) YTIMusicEntityReference *entityReference; // @dynamic entityReference;
@property(nonatomic) _Bool hack; // @dynamic hack;
@property(nonatomic) _Bool hasContainerEntityRef; // @dynamic hasContainerEntityRef;
@property(nonatomic) _Bool hasContainerEntityReference; // @dynamic hasContainerEntityReference;
@property(nonatomic) _Bool hasEntityRef; // @dynamic hasEntityRef;
@property(nonatomic) _Bool hasEntityReference; // @dynamic hasEntityReference;
@property(nonatomic) _Bool hasHack; // @dynamic hasHack;
@property(nonatomic) _Bool hasListIndexStyle; // @dynamic hasListIndexStyle;
@property(nonatomic) _Bool hasMenu; // @dynamic hasMenu;
@property(nonatomic) _Bool hasOverlay; // @dynamic hasOverlay;
@property(nonatomic) _Bool hasThumbnailStyle; // @dynamic hasThumbnailStyle;
@property(readonly) unsigned long long hash;
@property(nonatomic) int listIndexStyle; // @dynamic listIndexStyle;
@property(retain, nonatomic) YTIRenderer *menu; // @dynamic menu;
@property(retain, nonatomic) YTIRenderer *overlay; // @dynamic overlay;
@property(retain, nonatomic) NSMutableArray *potentialThumbnailOverlaysArray; // @dynamic potentialThumbnailOverlaysArray;
@property(readonly, nonatomic) unsigned long long potentialThumbnailOverlaysArray_Count; // @dynamic potentialThumbnailOverlaysArray_Count;
@property(readonly) Class superclass;
@property(nonatomic) int thumbnailStyle; // @dynamic thumbnailStyle;

@end

