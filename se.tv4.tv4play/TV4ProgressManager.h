//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TV4ProgressManager : NSObject
{
    _Bool _progressUpdated;
    NSMutableArray *_arrayWithCurrentTV4ApiProgressObjects;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableArray *arrayWithCurrentTV4ApiProgressObjects; // @synthesize arrayWithCurrentTV4ApiProgressObjects=_arrayWithCurrentTV4ApiProgressObjects;
@property(nonatomic, getter=isProgressUpdated) _Bool progressUpdated; // @synthesize progressUpdated=_progressUpdated;
- (void).cxx_destruct;
- (id)TV4PersonalisationServiceBaseURL;
- (void)updateParametersForTV4Progress:(id)arg1;
- (void)updatePositionForTV4ApiProgress:(id)arg1 withPosition:(double)arg2 withDuration:(double)arg3;
- (void)fetchProgressForProgramsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)fetchProgressForNid:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (void)fetchProgressForAssets:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (void)fetchProgressItemsDataForURLString:(id)arg1 header:(id)arg2 onCompletion:(CDUnknownBlockType)arg3;
- (id)assetIdList:(id)arg1;
- (id)authenticationHeaderForApiCall;
- (id)arrayContinueWatchingObjects;
- (void)clearProgress;
- (id)progressWithAssetId:(id)arg1;
- (id)createProgressAssetWithId:(id)arg1 position:(double)arg2 progress:(double)arg3;

@end

