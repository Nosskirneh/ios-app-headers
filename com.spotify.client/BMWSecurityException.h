//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface BMWSecurityException : NSObject
{
    NSNumber *_errorId;
    NSString *_errorMsg;
}

+ (id)objectWithCustom:(id)arg1;
+ (id)fullQualifiedName;
@property(retain) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
@property(retain) NSNumber *errorId; // @synthesize errorId=_errorId;
- (void).cxx_destruct;
- (id)description;
- (id)BMW_etchObject;
- (id)initWithErrorId:(id)arg1 errorMsg:(id)arg2;

@end

