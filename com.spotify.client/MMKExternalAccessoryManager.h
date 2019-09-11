//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EAAccessoryManager, EASessionFactory, MMKExternalAccessoryConnectionFactory, NSMutableDictionary, NSString;
@protocol MMKExternalAccessoryDelegate, MMKLogging, OS_dispatch_queue;

@interface MMKExternalAccessoryManager : NSObject
{
    NSObject<OS_dispatch_queue> *dispatchQueue;
    _Bool _observing;
    id <MMKExternalAccessoryDelegate> _delegate;
    NSString *_supportedProtocol;
    EASessionFactory *_sessionFactory;
    MMKExternalAccessoryConnectionFactory *_connectionFactory;
    EAAccessoryManager *_accessoryManager;
    NSMutableDictionary *_connections;
    id <MMKLogging> _logger;
}

@property(nonatomic) __weak id <MMKLogging> logger; // @synthesize logger=_logger;
@property(nonatomic, getter=isObserving) _Bool observing; // @synthesize observing=_observing;
@property(retain, nonatomic) NSMutableDictionary *connections; // @synthesize connections=_connections;
@property(retain, nonatomic) EAAccessoryManager *accessoryManager; // @synthesize accessoryManager=_accessoryManager;
@property(retain, nonatomic) MMKExternalAccessoryConnectionFactory *connectionFactory; // @synthesize connectionFactory=_connectionFactory;
@property(retain, nonatomic) EASessionFactory *sessionFactory; // @synthesize sessionFactory=_sessionFactory;
@property(readonly, nonatomic) NSString *supportedProtocol; // @synthesize supportedProtocol=_supportedProtocol;
@property(nonatomic) __weak id <MMKExternalAccessoryDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)createConnectionWithAccessory:(id)arg1 logger:(id)arg2;
- (void)accessoryDidDisconnect:(id)arg1;
- (void)accessoryDidConnect:(id)arg1;
- (void)endObserving;
- (void)beginObserving;
- (void)retrieveConnections;
- (void)dealloc;
- (id)initWithSupportedProtocol:(id)arg1 logger:(id)arg2;
- (id)initWithSupportedProtocol:(id)arg1;

@end

