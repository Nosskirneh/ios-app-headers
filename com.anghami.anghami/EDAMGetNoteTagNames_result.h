//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class EDAMNotFoundException, EDAMSystemException, EDAMUserException, NSArray;

@interface EDAMGetNoteTagNames_result : NSObject <NSCoding>
{
    NSArray *__success;
    EDAMUserException *__userException;
    EDAMSystemException *__systemException;
    EDAMNotFoundException *__notFoundException;
    _Bool __success_isset;
    _Bool __userException_isset;
    _Bool __systemException_isset;
    _Bool __notFoundException_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetNotFoundException;
- (_Bool)notFoundExceptionIsSet;
@property(retain, nonatomic, getter=notFoundException, setter=setNotFoundException:) EDAMNotFoundException *notFoundException; // @dynamic notFoundException;
- (void)unsetSystemException;
- (_Bool)systemExceptionIsSet;
@property(retain, nonatomic, getter=systemException, setter=setSystemException:) EDAMSystemException *systemException; // @dynamic systemException;
- (void)unsetUserException;
- (_Bool)userExceptionIsSet;
@property(retain, nonatomic, getter=userException, setter=setUserException:) EDAMUserException *userException; // @dynamic userException;
- (void)unsetSuccess;
- (_Bool)successIsSet;
@property(retain, nonatomic, getter=success, setter=setSuccess:) NSArray *success; // @dynamic success;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSuccess:(id)arg1 userException:(id)arg2 systemException:(id)arg3 notFoundException:(id)arg4;

@end

