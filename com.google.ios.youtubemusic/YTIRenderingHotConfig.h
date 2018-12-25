//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEnumArray, YTITextureConfiguration;

@interface YTIRenderingHotConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool enableTooltipRenderer; // @dynamic enableTooltipRenderer;
@property(nonatomic) _Bool hasEnableTooltipRenderer; // @dynamic hasEnableTooltipRenderer;
@property(nonatomic) _Bool hasHideMoreLikeThisMenuItem; // @dynamic hasHideMoreLikeThisMenuItem;
@property(nonatomic) _Bool hasIosEnableLoggingNoopNavigationTitleTaps; // @dynamic hasIosEnableLoggingNoopNavigationTitleTaps;
@property(nonatomic) _Bool hasLogRenderingErrors; // @dynamic hasLogRenderingErrors;
@property(nonatomic) _Bool hasPriorityLoaderMaxNumUniqueUrlsToLog; // @dynamic hasPriorityLoaderMaxNumUniqueUrlsToLog;
@property(nonatomic) _Bool hasPriorityLoaderRequestThresholdToLog; // @dynamic hasPriorityLoaderRequestThresholdToLog;
@property(nonatomic) _Bool hasTextureConfig; // @dynamic hasTextureConfig;
@property(nonatomic) _Bool hasUseAsCellNodeModel; // @dynamic hasUseAsCellNodeModel;
@property(nonatomic) _Bool hasUseCommandResponderEvent; // @dynamic hasUseCommandResponderEvent;
@property(nonatomic) _Bool hasUseItcvcViewStatus; // @dynamic hasUseItcvcViewStatus;
@property(nonatomic) _Bool hideMoreLikeThisMenuItem; // @dynamic hideMoreLikeThisMenuItem;
@property(nonatomic) _Bool iosEnableLoggingNoopNavigationTitleTaps; // @dynamic iosEnableLoggingNoopNavigationTitleTaps;
@property(nonatomic) _Bool logRenderingErrors; // @dynamic logRenderingErrors;
@property(nonatomic) int priorityLoaderMaxNumUniqueUrlsToLog; // @dynamic priorityLoaderMaxNumUniqueUrlsToLog;
@property(nonatomic) int priorityLoaderRequestThresholdToLog; // @dynamic priorityLoaderRequestThresholdToLog;
@property(retain, nonatomic) GPBEnumArray *sectionRendererWhitelistArray; // @dynamic sectionRendererWhitelistArray;
@property(readonly, nonatomic) unsigned long long sectionRendererWhitelistArray_Count; // @dynamic sectionRendererWhitelistArray_Count;
@property(retain, nonatomic) YTITextureConfiguration *textureConfig; // @dynamic textureConfig;
@property(nonatomic) _Bool useAsCellNodeModel; // @dynamic useAsCellNodeModel;
@property(nonatomic) _Bool useCommandResponderEvent; // @dynamic useCommandResponderEvent;
@property(nonatomic) _Bool useItcvcViewStatus; // @dynamic useItcvcViewStatus;

@end
