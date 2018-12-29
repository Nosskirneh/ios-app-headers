//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRMusicPA_GoogleInternalPlayMusicAdsV1AdInfo, GTLRMusicPA_GoogleInternalPlayMusicIdentifiersV1PlayableItemId, GTLRMusicPA_GoogleInternalPlayMusicInnerjamV1ElementsPlayButton, GTLRMusicPA_GoogleInternalPlayMusicInnerjamV1ElementsTitleSection, GTLRMusicPA_GoogleInternalPlayMusicInnerjamV1RenderersContextMenuDescriptor, GTLRMusicPA_GoogleInternalPlayMusicInnerjamV1RenderersRenderContext, GTLRMusicPA_GoogleInternalPlayMusicInnerjamV1VisualsAttributedText, GTLRMusicPA_GoogleInternalPlayMusicInnerjamV1VisualsImageReference, GTLRMusicPA_GoogleInternalPlayMusicMetadataV1PlaybackMetadata, NSString;

@interface GTLRMusicPA_GoogleInternalPlayMusicInnerjamV1RenderersTallPlayableCardDescriptor : GTLRObject
{
}

+ (id)propertyToJSONKeyMap;
- (id)gpm_musicItem;

// Remaining properties
@property(copy, nonatomic) NSString *a11yText; // @dynamic a11yText;
@property(retain, nonatomic) GTLRMusicPA_GoogleInternalPlayMusicAdsV1AdInfo *adInfo; // @dynamic adInfo;
@property(retain, nonatomic) GTLRMusicPA_GoogleInternalPlayMusicInnerjamV1RenderersContextMenuDescriptor *contextMenu; // @dynamic contextMenu;
@property(retain, nonatomic) GTLRMusicPA_GoogleInternalPlayMusicInnerjamV1VisualsAttributedText *descriptionProperty; // @dynamic descriptionProperty;
@property(copy, nonatomic) NSString *dismissalKey; // @dynamic dismissalKey;
@property(copy, nonatomic) NSString *explicitnessIconType; // @dynamic explicitnessIconType;
@property(retain, nonatomic) GTLRMusicPA_GoogleInternalPlayMusicInnerjamV1VisualsImageReference *imageReference; // @dynamic imageReference;
@property(retain, nonatomic) GTLRMusicPA_GoogleInternalPlayMusicIdentifiersV1PlayableItemId *itemId; // @dynamic itemId;
@property(retain, nonatomic) GTLRMusicPA_GoogleInternalPlayMusicInnerjamV1ElementsPlayButton *playButton; // @dynamic playButton;
@property(retain, nonatomic) GTLRMusicPA_GoogleInternalPlayMusicMetadataV1PlaybackMetadata *playbackMetadata; // @dynamic playbackMetadata;
@property(retain, nonatomic) GTLRMusicPA_GoogleInternalPlayMusicInnerjamV1RenderersRenderContext *renderContext; // @dynamic renderContext;
@property(retain, nonatomic) GTLRMusicPA_GoogleInternalPlayMusicInnerjamV1ElementsTitleSection *titleSection; // @dynamic titleSection;

@end
