const {
    createLogger,
    transports,
    format
} = require('winston');
require('winston-mongodb');
const logger = createLogger({
    transports: [

        // to log into a file named info.log
        new transports.File({
            filename: 'info.log',
            level: 'info',
            format: format.combine(format.timestamp(), format.json())
        }),

        // to log into console
        new transports.Console({
            level: 'info'
        }),

        // to log into MongoDB Collection
        new transports.MongoDB({
            level: 'error',
            db: 'mongodb://localhost:27017/winstonLogger',
            options: {
                useUnifiedTopology: true
            },
            collection: 'logFiles',
            format: format.combine(format.timestamp(), format.json())
        })
    ]
})

module.exports = logger;