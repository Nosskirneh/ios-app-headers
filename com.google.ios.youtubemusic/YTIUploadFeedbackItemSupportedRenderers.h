//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIProcessingProgressBarRenderer, YTIThumbnailStatusRenderer, YTIUploadActionsRenderer, YTIUploadStatusRenderer, YTIVideoIdRenderer;

@interface YTIUploadFeedbackItemSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasProcessingProgressBar; // @dynamic hasProcessingProgressBar;
@property(nonatomic) _Bool hasThumbnailStatus; // @dynamic hasThumbnailStatus;
@property(nonatomic) _Bool hasUploadActions; // @dynamic hasUploadActions;
@property(nonatomic) _Bool hasUploadStatus; // @dynamic hasUploadStatus;
@property(nonatomic) _Bool hasVideoId; // @dynamic hasVideoId;
@property(retain, nonatomic) YTIProcessingProgressBarRenderer *processingProgressBar; // @dynamic processingProgressBar;
@property(retain, nonatomic) YTIThumbnailStatusRenderer *thumbnailStatus; // @dynamic thumbnailStatus;
@property(retain, nonatomic) YTIUploadActionsRenderer *uploadActions; // @dynamic uploadActions;
@property(retain, nonatomic) YTIUploadStatusRenderer *uploadStatus; // @dynamic uploadStatus;
@property(retain, nonatomic) YTIVideoIdRenderer *videoId; // @dynamic videoId;

@end

