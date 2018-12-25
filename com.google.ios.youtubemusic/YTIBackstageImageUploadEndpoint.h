//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIBackstageImageEditorSupportedRenderers, YTIImageUploadElementsCompatibility, YTIImageValidationInfo;

@interface YTIBackstageImageUploadEndpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *channelId; // @dynamic channelId;
@property(retain, nonatomic) YTIImageUploadElementsCompatibility *compatibility; // @dynamic compatibility;
@property(nonatomic) _Bool enableCameraEntryPoint; // @dynamic enableCameraEntryPoint;
@property(nonatomic) _Bool hasChannelId; // @dynamic hasChannelId;
@property(nonatomic) _Bool hasCompatibility; // @dynamic hasCompatibility;
@property(nonatomic) _Bool hasEnableCameraEntryPoint; // @dynamic hasEnableCameraEntryPoint;
@property(nonatomic) _Bool hasImageEditor; // @dynamic hasImageEditor;
@property(nonatomic) _Bool hasImageValidationInfo; // @dynamic hasImageValidationInfo;
@property(nonatomic) _Bool hasUploadURL; // @dynamic hasUploadURL;
@property(retain, nonatomic) YTIBackstageImageEditorSupportedRenderers *imageEditor; // @dynamic imageEditor;
@property(retain, nonatomic) YTIImageValidationInfo *imageValidationInfo; // @dynamic imageValidationInfo;
@property(copy, nonatomic) NSString *uploadURL; // @dynamic uploadURL;

@end

