//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ResponseParser-Protocol.h"

@class NSString;

@interface ApiModelParser : NSObject <ResponseParser>
{
    Class _modelClass;
}

@property(readonly, nonatomic) Class modelClass; // @synthesize modelClass=_modelClass;
- (void).cxx_destruct;
- (id)invalidDataError:(id)arg1;
- (id)modelFromData:(id)arg1 error:(id *)arg2;
- (_Bool)isValidData:(id)arg1;
- (id)parseResponse:(id)arg1;
- (id)initWithModelClass:(Class)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

