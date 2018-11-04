//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMutableDictionary, NSString;

@interface IDRhmiFeatureSwitcherDataAccess : NSObject
{
    NSMutableDictionary *_dataSource;
    NSString *_dataSourcePath;
    NSLock *_dataSourceAccessLock;
}

+ (id)defaultFeatureSwitcherDataAccessWithVehicleInfo:(id)arg1;
+ (id)defaultFeatureSwitcherDataAccessForCurrentVehicle;
@property(readonly, nonatomic) NSLock *dataSourceAccessLock; // @synthesize dataSourceAccessLock=_dataSourceAccessLock;
@property(retain, nonatomic) NSString *dataSourcePath; // @synthesize dataSourcePath=_dataSourcePath;
- (void).cxx_destruct;
- (id)dataSourcePathFromVehicleInfo:(id)arg1;
- (void)writeDataSourceToFileSystem:(id)arg1;
- (id)loadDataSourceFromFileSystem;
- (void)deleteFeatureInfo:(id)arg1;
- (void)persistFeatureInfo:(id)arg1;
- (id)featureInfosPassingTest:(CDUnknownBlockType)arg1;
- (id)featureInfosPassingFilter:(id)arg1;
- (id)allFeatureInfos;
@property(readonly, nonatomic) NSMutableDictionary *dataSource; // @synthesize dataSource=_dataSource;
- (void)setDataSourcePathWithVehicleInfo:(id)arg1;
- (id)initWithDataSourcePath:(id)arg1;
- (id)initWithVehicleInfo:(id)arg1;
- (id)init;

@end

