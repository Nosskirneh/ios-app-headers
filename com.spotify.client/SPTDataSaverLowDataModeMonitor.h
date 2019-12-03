//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_nw_path_monitor, SPTDataSaverLowDataModeMonitorDelegate;

@interface SPTDataSaverLowDataModeMonitor : NSObject
{
    _Bool _activeState;
    NSObject<SPTDataSaverLowDataModeMonitorDelegate> *_delegate;
    NSObject<OS_nw_path_monitor> *_pathMonitor;
}

@property(nonatomic) _Bool activeState; // @synthesize activeState=_activeState;
@property(retain, nonatomic) NSObject<OS_nw_path_monitor> *pathMonitor; // @synthesize pathMonitor=_pathMonitor;
@property(nonatomic) __weak NSObject<SPTDataSaverLowDataModeMonitorDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setupLowDataModeMonitor;
- (id)init;

@end

