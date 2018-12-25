//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, YTIMdxNotificationTriggerCondition_QuietPeriodByNotificationCondition, YTIMdxNotificationTriggerCondition_Range;

@interface YTIMdxNotificationTriggerCondition : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *castAvailableSessionCountsArray; // @dynamic castAvailableSessionCountsArray;
@property(readonly, nonatomic) unsigned long long castAvailableSessionCountsArray_Count; // @dynamic castAvailableSessionCountsArray_Count;
@property(retain, nonatomic) YTIMdxNotificationTriggerCondition_Range *currentVideoDuration; // @dynamic currentVideoDuration;
@property(retain, nonatomic) NSMutableArray *dependentNotificationsArray; // @dynamic dependentNotificationsArray;
@property(readonly, nonatomic) unsigned long long dependentNotificationsArray_Count; // @dynamic dependentNotificationsArray_Count;
@property(nonatomic) _Bool hasCurrentVideoDuration; // @dynamic hasCurrentVideoDuration;
@property(nonatomic) _Bool hasQuietPeriodByNotification; // @dynamic hasQuietPeriodByNotification;
@property(nonatomic) _Bool hasRequireFullScreen; // @dynamic hasRequireFullScreen;
@property(nonatomic) _Bool hasRequireHd; // @dynamic hasRequireHd;
@property(nonatomic) _Bool hasRequirePlaylistPlayback; // @dynamic hasRequirePlaylistPlayback;
@property(nonatomic) _Bool hasRequireSd; // @dynamic hasRequireSd;
@property(nonatomic) _Bool hasRequiredPage; // @dynamic hasRequiredPage;
@property(nonatomic) _Bool hasUncastedVideoCount; // @dynamic hasUncastedVideoCount;
@property(retain, nonatomic) NSMutableArray *mdxConnectionCountsArray; // @dynamic mdxConnectionCountsArray;
@property(readonly, nonatomic) unsigned long long mdxConnectionCountsArray_Count; // @dynamic mdxConnectionCountsArray_Count;
@property(retain, nonatomic) NSMutableArray *playlistIdsArray; // @dynamic playlistIdsArray;
@property(readonly, nonatomic) unsigned long long playlistIdsArray_Count; // @dynamic playlistIdsArray_Count;
@property(retain, nonatomic) YTIMdxNotificationTriggerCondition_QuietPeriodByNotificationCondition *quietPeriodByNotification; // @dynamic quietPeriodByNotification;
@property(nonatomic) _Bool requireFullScreen; // @dynamic requireFullScreen;
@property(nonatomic) _Bool requireHd; // @dynamic requireHd;
@property(nonatomic) _Bool requirePlaylistPlayback; // @dynamic requirePlaylistPlayback;
@property(nonatomic) _Bool requireSd; // @dynamic requireSd;
@property(nonatomic) int requiredPage; // @dynamic requiredPage;
@property(retain, nonatomic) NSMutableArray *timeConditionsArray; // @dynamic timeConditionsArray;
@property(readonly, nonatomic) unsigned long long timeConditionsArray_Count; // @dynamic timeConditionsArray_Count;
@property(retain, nonatomic) NSMutableArray *timeOfWeekConditionsArray; // @dynamic timeOfWeekConditionsArray;
@property(readonly, nonatomic) unsigned long long timeOfWeekConditionsArray_Count; // @dynamic timeOfWeekConditionsArray_Count;
@property(retain, nonatomic) YTIMdxNotificationTriggerCondition_Range *uncastedVideoCount; // @dynamic uncastedVideoCount;
@property(retain, nonatomic) NSMutableArray *videoIdsArray; // @dynamic videoIdsArray;
@property(readonly, nonatomic) unsigned long long videoIdsArray_Count; // @dynamic videoIdsArray_Count;

@end

