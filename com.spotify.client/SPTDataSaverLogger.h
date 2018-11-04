//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@interface SPTDataSaverLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
    NSURL *_settingsDataSaverURI;
}

@property(retain, nonatomic) NSURL *settingsDataSaverURI; // @synthesize settingsDataSaverURI=_settingsDataSaverURI;
@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (double)timestamp;
- (void)logInteractionForDataSaverSettingEnabled:(_Bool)arg1;
- (void)logInteractionWithInteractionType:(id)arg1 userIntent:(id)arg2 targetUri:(id)arg3 pageUri:(id)arg4;
- (id)initWithLogCenter:(id)arg1 settingsDataSaverURI:(id)arg2;

@end

