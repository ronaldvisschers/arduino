// content of secrets.h
#define WIFI_SSID "1" // local WiFi name
#define WIFI_KEY "" // local WiFi password

// InfluxDB v2 server url, e.g. https://eu-central-1-1.aws.cloud2.influxdata.com (Use: InfluxDB UI -> Load Data -> Client Libraries)
#define INFLUXDB_CLOUD_URL ""
// InfluxDB v2 server or cloud API authentication token (Use: InfluxDB UI -> Data -> Tokens -> <select token>)
#define INFLUXDB_CLOUD_TOKEN ""
// InfluxDB v2 organization id (Use: InfluxDB UI -> User -> About -> Common Ids )
#define INFLUXDB_CLOUD_ORG "123"
// InfluxDB v2 bucket name (Use: InfluxDB UI ->  Data -> Buckets)
#define INFLUXDB_CLOUD_BUCKET "mydata"

// local setup
#define INFLUXDB_URL "http://someip:8086"
#define INFLUXDB_DATABASE "mydata"
#define INFLUXDB_USER "arduino"
#define INFLUXDB_PASSWORD "supersecret"

