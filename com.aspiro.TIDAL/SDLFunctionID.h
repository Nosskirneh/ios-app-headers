//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface SDLFunctionID : NSObject
{
    NSDictionary *_functionIds;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSDictionary *functionIds; // @synthesize functionIds=_functionIds;
- (void).cxx_destruct;
- (id)functionIdForName:(id)arg1;
- (id)functionNameForId:(unsigned int)arg1;
- (id)init;

@end

