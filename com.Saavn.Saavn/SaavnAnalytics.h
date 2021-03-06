//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray, NSNumber, NSString, NSTimer;

@interface SaavnAnalytics : NSObject
{
    NSTimer *dispatchTimer;
    NSMutableArray *aggEvents;
    NSString *databasePath;
    struct sqlite3 *database;
    NSNumber *idToClear;
    NSLock *sqlLock;
    NSNumber *_idToClear;
}

+ (id)sharedAnalytics;
@property(retain, nonatomic) NSNumber *idToClear; // @synthesize idToClear=_idToClear;
- (void).cxx_destruct;
- (void)dealloc;
- (void)checkAndCreateDatabase;
- (void)addColumn:(id)arg1;
- (void)AddNewColumnsForCustomVariables;
- (_Bool)checkIfColumnExists:(id)arg1;
- (void)checkAndCreateTable;
- (void)checkToRemoveDBOnDataOverflow;
- (void)retryOnError:(id)arg1;
- (void)statSuccess:(id)arg1;
- (int)getDBCount;
- (void)logStat:(id)arg1 songId:(id)arg2 loginmode:(id)arg3 promode:(id)arg4 connection_state:(id)arg5;
- (void)dispatch;
- (id)init;

@end

