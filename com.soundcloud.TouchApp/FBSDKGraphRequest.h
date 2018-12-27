//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface FBSDKGraphRequest : NSObject
{
    NSMutableDictionary *_parameters;
    NSString *_tokenString;
    NSString *_graphPath;
    NSString *_HTTPMethod;
    NSString *_version;
    unsigned long long _flags;
}

+ (id)preprocessParams:(id)arg1;
+ (id)serializeURL:(id)arg1 params:(id)arg2 httpMethod:(id)arg3 forBatch:(_Bool)arg4;
+ (id)serializeURL:(id)arg1 params:(id)arg2 httpMethod:(id)arg3;
+ (id)serializeURL:(id)arg1 params:(id)arg2;
+ (_Bool)isAttachment:(id)arg1;
@property(nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property(readonly, copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, copy, nonatomic) NSString *HTTPMethod; // @synthesize HTTPMethod=_HTTPMethod;
@property(readonly, copy, nonatomic) NSString *graphPath; // @synthesize graphPath=_graphPath;
@property(readonly, copy, nonatomic) NSString *tokenString; // @synthesize tokenString=_tokenString;
@property(readonly, nonatomic) NSMutableDictionary *parameters; // @synthesize parameters=_parameters;
- (void).cxx_destruct;
- (id)description;
- (id)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)hasAttachments;
- (void)setGraphErrorRecoveryDisabled:(_Bool)arg1;
- (_Bool)isGraphErrorRecoveryDisabled;
- (id)initWithGraphPath:(id)arg1 parameters:(id)arg2 tokenString:(id)arg3 version:(id)arg4 HTTPMethod:(id)arg5;
- (id)initWithGraphPath:(id)arg1 parameters:(id)arg2 tokenString:(id)arg3 HTTPMethod:(id)arg4 flags:(unsigned long long)arg5;
- (id)initWithGraphPath:(id)arg1 parameters:(id)arg2 flags:(unsigned long long)arg3;
- (id)initWithGraphPath:(id)arg1 parameters:(id)arg2 HTTPMethod:(id)arg3;
- (id)initWithGraphPath:(id)arg1 parameters:(id)arg2;
- (id)init;

@end

