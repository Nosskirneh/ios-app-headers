//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSBaseResponseObject.h"

@class NSString;

@interface SSError : SSBaseResponseObject
{
    int _code;
    NSString *_friendlyDescription;
    NSString *_message;
    NSString *_system;
    NSString *_systemCode;
}

+ (id)errorWithJSON:(id)arg1;
@property(retain, nonatomic) NSString *systemCode; // @synthesize systemCode=_systemCode;
@property(retain, nonatomic) NSString *system; // @synthesize system=_system;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *friendlyDescription; // @synthesize friendlyDescription=_friendlyDescription;
@property(nonatomic) int code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)initInternal;
- (id)JSONFromError;
- (id)initWithCode:(int)arg1 withMessage:(id)arg2;

@end
