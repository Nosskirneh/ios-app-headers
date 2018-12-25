//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;
@protocol CSITimeSource;

@interface CSITimer : NSObject
{
    NSMutableDictionary *ongoingVariables_;
    NSMutableDictionary *completedVariables_;
    NSMutableArray *experiments_;
    NSMutableDictionary *customizedParameters_;
    _Bool reportIRT_;
    NSString *action_;
    double startTime_;
    id <CSITimeSource> timeSource_;
}

@property(retain, nonatomic) id <CSITimeSource> timeSource; // @synthesize timeSource=timeSource_;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=startTime_;
@property(nonatomic) _Bool reportIRT; // @synthesize reportIRT=reportIRT_;
@property(copy, nonatomic) NSString *action; // @synthesize action=action_;
- (void)putCustomizedParameter:(id)arg1 value:(id)arg2;
- (void)removeExperiment:(id)arg1;
- (void)addExperiment:(id)arg1;
- (void)addCompletedVariable:(id)arg1;
- (void)addCompletedVariable:(id)arg1 withKey:(id)arg2;
- (void)removeCompletedVariable:(id)arg1;
- (void)cancelTickVariable:(id)arg1 withKey:(id)arg2;
- (void)endTickVariable:(id)arg1 withKey:(id)arg2;
- (void)startTickVariable:(id)arg1 withKey:(id)arg2;
- (void)cancelTickVariable:(id)arg1;
- (void)endTickVariable:(id)arg1;
- (void)startTickVariable:(id)arg1;
- (void)startTimer;
@property(readonly, nonatomic) NSDictionary *customizedParameters; // @synthesize customizedParameters=customizedParameters_;
@property(readonly, nonatomic) NSArray *experiments; // @synthesize experiments=experiments_;
@property(readonly, nonatomic) NSDictionary *ongoingVariables; // @synthesize ongoingVariables=ongoingVariables_;
@property(readonly, nonatomic) NSDictionary *variables; // @synthesize variables=completedVariables_;
- (void)dealloc;
- (id)initWithAction:(id)arg1;
- (id)init;

@end
