//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe;

@interface GFMIErrorHelper : NSObject
{
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)localizedDescriptionForErrorCode:(unsigned long long)arg1;
- (id)errorWithCode:(unsigned long long)arg1 userInfo:(id)arg2;
- (id)errorWithCode:(unsigned long long)arg1;

@end

