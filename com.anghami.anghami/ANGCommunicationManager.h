//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ANGCommunicationManager : NSObject
{
}

+ (void)sendClicks:(id)arg1;
+ (_Bool)shouldSync:(id)arg1;
+ (id)getCommunicationTrakingsToPost;
+ (void)sendData;
+ (long long)daysBetweenDate:(id)arg1 andDate:(id)arg2;
+ (double)secondsBetweenDate:(id)arg1 andDate:(id)arg2;
+ (id)insertNewCommunicationWithType:(id)arg1 action:(id)arg2 objectData:(id)arg3 reporting:(id)arg4 reportingTool:(id)arg5 objectId:(id)arg6 clickTarget:(id)arg7;
+ (_Bool)shouldReportObjectId:(id)arg1 communicationType:(id)arg2 action:(id)arg3 reportType:(id)arg4 reportingTool:(id)arg5;
+ (void)logAmplitudeEventsForCommunication:(id)arg1 actionOrCancel:(long long)arg2;
+ (void)addNewCommunicationDialog:(id)arg1 action:(id)arg2 actionOrCancel:(long long)arg3 clickTarget:(id)arg4;
+ (void)addCloseClickForDialog:(id)arg1;
+ (void)addActionClickForDialog:(id)arg1;
+ (void)addViewForDialog:(id)arg1;
+ (void)addNewCommunicationQuestion:(id)arg1 action:(id)arg2 actionOrCancel:(long long)arg3 clickTarget:(id)arg4;
+ (void)addCancelClickForQuestion:(id)arg1;
+ (void)addActionClickForQuestion:(id)arg1 clickedAnswer:(id)arg2;
+ (void)addViewForQuestion:(id)arg1;
+ (void)addNewCommunicationButton:(id)arg1 action:(id)arg2 actionOrCancel:(long long)arg3 clickTarget:(id)arg4;
+ (void)addClickForButton:(id)arg1;
+ (void)addViewForButton:(id)arg1;
+ (void)addNewCommunicationFreeHeader:(id)arg1 action:(id)arg2;
+ (void)addClickForFreeHeader:(id)arg1;
+ (void)addViewForFreeHeader:(id)arg1;
+ (void)addNewCommunicationFreeBar:(id)arg1 action:(id)arg2;
+ (void)addClickForFreeBar:(id)arg1;
+ (void)addViewForFreeBar:(id)arg1;

@end
