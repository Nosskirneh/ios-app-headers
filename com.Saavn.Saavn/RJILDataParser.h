//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RJILDataParser : NSObject
{
}

+ (id)getJSONForEvent:(id)arg1 name:(id)arg2;
+ (id)sharedInstance;
- (id)fetchDBErrorDataModelJSONDataWithSession:(id)arg1 andMessage:(id)arg2;
- (id)fetchEndSessionJSONData:(id)arg1 withSessionUserInfoData:(id)arg2 withLogNo:(id)arg3;
- (id)createEventPropertyJSONWithString:(id)arg1;
- (id)fetchEventJSONData:(id)arg1;
- (id)getFeedbackDictonaryFrom:(id)arg1;
- (id)fetchCrashJSONData:(id)arg1 withLogNo:(id)arg2;
- (id)fetchBeginSessionJSONData:(id)arg1 withSessionUserInfoData:(id)arg2 withLogNo:(id)arg3;

@end
