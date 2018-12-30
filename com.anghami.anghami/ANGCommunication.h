//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RLMObject.h"

@class NSString;

@interface ANGCommunication : RLMObject
{
    _Bool _isLoggedToServer;
    NSString *_anId;
    NSString *_communicationType;
    NSString *_objectData;
    NSString *_action;
    long long _timestamp;
    NSString *_reporting;
    NSString *_reportingTool;
    NSString *_objectId;
    NSString *_clickTarget;
}

@property(nonatomic) _Bool isLoggedToServer; // @synthesize isLoggedToServer=_isLoggedToServer;
@property(retain, nonatomic) NSString *clickTarget; // @synthesize clickTarget=_clickTarget;
@property(retain, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
@property(retain, nonatomic) NSString *reportingTool; // @synthesize reportingTool=_reportingTool;
@property(retain, nonatomic) NSString *reporting; // @synthesize reporting=_reporting;
@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *objectData; // @synthesize objectData=_objectData;
@property(retain, nonatomic) NSString *communicationType; // @synthesize communicationType=_communicationType;
@property(retain, nonatomic) NSString *anId; // @synthesize anId=_anId;
- (void).cxx_destruct;
- (id)amplitudeParams;
- (id)toDictionary;

@end
